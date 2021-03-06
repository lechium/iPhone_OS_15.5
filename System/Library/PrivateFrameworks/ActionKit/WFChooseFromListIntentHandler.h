//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/WFChooseFromListIntentHandling-Protocol.h>

@class NSString;

@interface WFChooseFromListIntentHandler : NSObject <WFChooseFromListIntentHandling>
{
}

- (void)resolvePromptForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000028242f
- (void)provideChosenItemsOptionsCollectionForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002823c2
- (void)resolveChosenItemsForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002821bb
- (void)handleChooseFromList:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002820e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

