//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol TTRBannerControllerDelegate;

@interface TTRBannerController : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001849bc
- (void)buildTTRMessageBubbleRecipientsListWithGroupMessageUUID:(id)arg1 with:(id)arg2;	// IMP=0x000000000018490d
- (void)showTTRBanner;	// IMP=0x0000000000184901
- (id)init;	// IMP=0x00000000001848e4
@property(nonatomic) __weak id <TTRBannerControllerDelegate> delegate; // @synthesize delegate;

@end
