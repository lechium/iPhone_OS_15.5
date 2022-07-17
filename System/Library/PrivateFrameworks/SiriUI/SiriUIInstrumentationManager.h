//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUI/AFAnalyticsDialogIdentifierAssociationProvider-Protocol.h>

@class AFAnalyticsTurnBasedInstrumentationContext;

@interface SiriUIInstrumentationManager : NSObject <AFAnalyticsDialogIdentifierAssociationProvider>
{
}

+ (id)sharedManager;	// IMP=0x000000000000cb6d
- (id)associatedDialogIdentifiersForAceObjectIdentifier:(id)arg1;	// IMP=0x000000000000cd8c
- (void)emitUUFRPresentedEventWith:(id)arg1 snippetClass:(id)arg2 dialogIdentifier:(id)arg3 dialogPhase:(id)arg4;	// IMP=0x000000000000ccbe
- (void)storeCurrentInstrumentationTurnContext:(id)arg1;	// IMP=0x000000000000cc48
@property(readonly) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext;
- (id)init;	// IMP=0x000000000000cbc2

@end
