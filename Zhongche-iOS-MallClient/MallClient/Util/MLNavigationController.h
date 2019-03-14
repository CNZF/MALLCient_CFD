//
//  MLNavigationController.h
//  MultiLayerNavigation
//
//  Created by Feather Chan on 13-4-12.
//  Copyright (c) 2013年 Feather Chan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MLNavigationController : UINavigationController{
    UIPanGestureRecognizer *panGestureRecognizer;
}

// Enable the drag to back interaction, Defalt is YES.
@property (nonatomic,assign) BOOL canDragBack;
@property (nonatomic,strong) NSMutableArray *screenShotsList;

-(void)addPanGestureRecognizer;
-(void)removePanGestureRecognizer;


@property (nonatomic, assign)BOOL isNeedZoomIn;//是否需要放缩Defalt is YES.
@end