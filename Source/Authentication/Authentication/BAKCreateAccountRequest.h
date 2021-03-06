//
//  BAKCreateAccountRequest.h
//  BackchannelSDK
//
//  Created by Soroush Khanlou on 5/22/15.
//  Copyright (c) 2015 Backchannel. All rights reserved.
//

#import "BAKRequestTemplate.h"
#import "BAKRemoteConfiguration.h"

@interface BAKCreateAccountRequest : NSObject <BAKRequestTemplate>

- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password configuration:(BAKRemoteConfiguration *)configuration;

@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *password;

@property (readonly) BAKRemoteConfiguration *configuration;

@end
