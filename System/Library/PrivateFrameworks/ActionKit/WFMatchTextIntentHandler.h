//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/WFMatchTextIntentHandling-Protocol.h>

@class NSString;

@interface WFMatchTextIntentHandler : NSObject <WFMatchTextIntentHandling>
{
}

- (void)handleMatchText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000261f78
- (void)resolveTextForMatchText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000261e78
- (void)resolvePatternForMatchText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000261d78
- (void)resolveCaseSensitiveForMatchText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000261ccf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

