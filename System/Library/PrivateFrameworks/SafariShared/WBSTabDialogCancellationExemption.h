//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WBSTabDialogCancellationExemption : NSObject
{
    CDUnknownBlockType _cancellationExemptionHandler;	// 8 = 0x8
}

+ (id)sameOriginNavigationExemption:(id)arg1;	// IMP=0x0000000000072aaa
+ (id)committedNavigationExemption;	// IMP=0x0000000000072a30
+ (id)provisionalNavigationExemption;	// IMP=0x00000000000729b6
- (void).cxx_destruct;	// IMP=0x0000000000072c35
- (_Bool)isExemptFromCancellationInContext:(id)arg1;	// IMP=0x00000000000729a4
- (id)initWithCancellationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000072922
- (id)init;	// IMP=0x0000000000072914

@end

