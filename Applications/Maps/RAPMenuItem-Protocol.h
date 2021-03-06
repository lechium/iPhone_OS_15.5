//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol RAPMenuItem <NSObject>
@property(readonly, nonatomic) int userAction;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;

@optional
@property(copy, nonatomic) NSString *localizedServerControlledDescription;
@end

