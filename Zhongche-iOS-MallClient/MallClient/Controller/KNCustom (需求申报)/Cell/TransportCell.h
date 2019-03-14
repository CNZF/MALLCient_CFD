//
//  TransportCell.h
//  MallClient
//
//  Created by lxy on 2018/6/10.
//  Copyright © 2018年 com.zhongche.cn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddressInfo.h"

 typedef void(^SwitchChangeBlock)(NSInteger row , BOOL isShow);

@interface TransportCell : UITableViewCell

@property (nonatomic, strong) SwitchChangeBlock blcok;
@property (nonatomic, strong) AddressInfo * info;

- (void) setIndexSectionAndIndexRow:(NSInteger)section row:(NSInteger)row And:(BOOL) isShow addressInfo:(AddressInfo *)addressInfo;

@end
