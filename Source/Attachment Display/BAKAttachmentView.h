//
//  BAKAttachmentView.h
//  BackchannelSDK
//
//  Created by Soroush Khanlou on 8/28/15.
//  Copyright (c) 2015 Backchannel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BAKLoadableView.h"

@class BAKLoadingView;

@interface BAKAttachmentView : UIView<BAKLoadableView>

@property (nonatomic, readonly) UIImageView *attachmentImageView;
@property (nonatomic, readonly) UIButton *removeButton;

@property (nonatomic) UIEdgeInsets layoutInsets;

@end
