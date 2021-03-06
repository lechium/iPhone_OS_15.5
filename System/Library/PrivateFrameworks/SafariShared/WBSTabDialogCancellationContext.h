//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBSTabDialogCancellationContext : NSObject
{
    NSString *_reason;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
}

+ (id)tabClosedContext;	// IMP=0x00000000001004ef
+ (id)committedNavigationContextWithURL:(id)arg1;	// IMP=0x000000000010041f
+ (id)provisionalNavigationContext;	// IMP=0x0000000000100404
+ (id)cancellationContextWithReason:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000100398
- (void).cxx_destruct;	// IMP=0x000000000010051e
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)initWithReason:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000001002c8
- (id)init;	// IMP=0x00000000001002ba

@end

