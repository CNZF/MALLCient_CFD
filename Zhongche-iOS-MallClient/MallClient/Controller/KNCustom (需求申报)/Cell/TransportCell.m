//
//  TransportCell.m
//  MallClient
//
//  Created by lxy on 2018/6/10.
//  Copyright © 2018年 com.zhongche.cn. All rights reserved.
//

#import "TransportCell.h"


@interface TransportCell ()

@property (weak, nonatomic) IBOutlet UIView *showView;
//@property (weak, nonatomic) IBOutlet UIButton *btn;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (weak, nonatomic) IBOutlet UILabel *stateLabel;
@property (weak, nonatomic) IBOutlet UILabel *getOrSetLabel;
@property (weak, nonatomic) IBOutlet UILabel *getOrSetAddressLabel;

@property (nonatomic, assign) NSInteger row;
@property (nonatomic, assign) BOOL isShow;

@property (weak, nonatomic) IBOutlet UISwitch *uiswitch;


@end

@implementation TransportCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void) setIndexSectionAndIndexRow:(NSInteger)section row:(NSInteger)row And:(BOOL) isShow addressInfo:(AddressInfo *)addressInfo
{
    _row  = row;
    _isShow = isShow;
    
    self.uiswitch.on = isShow;

    if (row ==0) {
        self.stateLabel.text = @"上门取货";
        self.getOrSetLabel.text = @"取";
        self.getOrSetAddressLabel.text = @"提货地址：";
       
       
    }else{
        self.getOrSetLabel.text = @"收";
        self.getOrSetAddressLabel.text = @"送货地址：";
        self.stateLabel.text = @"送货上门";
    }
    if (addressInfo) {
        self.nameLabel.text = [NSString stringWithFormat:@"%@     %@",addressInfo.contacts,addressInfo.contactsPhone];
        self.addressLabel.text = addressInfo.address;
       
    }else{
        self.nameLabel.text = [NSString stringWithFormat:@"%@     %@",@"",@""];
        self.addressLabel.text = @"";
    }
    if (self.isShow) {
        self.showView.hidden = NO;
    }else{
        self.showView.hidden = YES;
    }
}


- (IBAction)pressSwitch:(id)sender {
    if (self.blcok) {
        self.blcok(self.row, NULL);
    }
}

- (void)setInfo:(AddressInfo *)info
{
    _info = info;
    if (!info) {
        self.nameLabel.text = [NSString stringWithFormat:@"%@     %@",@"",@""];
        self.addressLabel.text = @"";
    }else{
        self.nameLabel.text = [NSString stringWithFormat:@"%@     %@",info.contacts,info.contactsPhone];
        self.addressLabel.text = info.address;
    }
    
}

@end
