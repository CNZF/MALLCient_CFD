//
//  NSString+Addition.h
//  BaseProject
//
//  Created by zhangrongbing on 2016/9/29.
//  Copyright © 2016年 lovcreate. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Addition)


/**
 字符串转时间戳

 @param format 时间格式

 @return 时间戳
 */
-(NSTimeInterval)lc_timestampByformat:(NSString*)format;

/**
 把旧的时间格式转换为新的时间格式

 @param oldFormat 旧的时间格式
 @param newFormat 新的时间格式

 @return 新格式的时间字符串
 */
-(NSString*)lc_datetimeStringFromOldFormat:(NSString*)oldFormat toNewFormat:(NSString*)newFormat;

/**
 时间戳转为带格式的是按字符串

 @param timestamp 时间戳
 @param format    时间格式

 @return 时间字符串
 */
-(NSString*)lc_datetimeStringForTimestamp:(NSTimeInterval)timestamp format:(NSString*)format;

/**
 根据文字的字号和指定的宽度算文字的高度

 @param width    宽度
 @param fontSize 字号

 @return 文字的高度
 */
-(CGSize) lc_sizeForSpecialWidth:(CGFloat)width fontSize:(CGFloat)fontSize;


/**
 阿拉伯数字转中文数字

 @param arabicNum 阿拉伯数字

 @return 中文数字
 */
-(NSString *)lc_chineseNumFromArbicNum:(NSInteger)arabicNum;

/**
 字符串转成十六进制数字
 @return 十六进制数字
 */
- (unsigned long)lc_hexNumber;

+(NSString*)lc_datetimeWithFormat:(NSString*)format;


/**
 字符串转字典

 @return 字典
 */
-(NSDictionary *)lc_MD5;

-(NSDictionary*) lc_toDictionary;

-(NSString*)lc_MD5:(NSString*)string;

-(NSString*)lc_phoneFormatter;

//==============正则===============
//车牌
- (BOOL)validateCarNo;

//手机号
- (BOOL)validateMobile;

//发动机、车架
- (BOOL)validateFrameNoAndEngineNo;

//emoji
- (BOOL)isContainsTwoEmoji;

//时间戳转时间格式字符串

@end
