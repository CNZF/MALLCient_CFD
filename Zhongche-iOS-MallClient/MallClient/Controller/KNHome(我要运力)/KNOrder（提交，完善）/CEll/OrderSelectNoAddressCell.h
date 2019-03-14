//
//  OrderSelectNoAddressCell.h
//  MallClient
//
//  Created by lxy on 2018/7/4.
//  Copyright © 2018年 com.zhongche.cn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CapacityEntryModel.h"
#import "CapacityViewModel.h"

@interface OrderSelectNoAddressCell : UITableViewCell
- (void) setCapaModel:(CapacityEntryModel *)model Index:(NSInteger)index type:(NSString *)type;
- (void) setCapaViewModel:(CapacityViewModel *)model Index:(NSInteger)index type:(NSString *)type;
@end
