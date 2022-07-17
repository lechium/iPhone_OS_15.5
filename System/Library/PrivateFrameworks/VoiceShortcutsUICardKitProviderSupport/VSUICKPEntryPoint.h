//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutsUICardKitProviderSupport/CRKIdentifiedProviding-Protocol.h>

@class NSString;

@interface VSUICKPEntryPoint : NSObject <CRKIdentifiedProviding>
{
}

@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (id)cardViewControllerForCard:(id)arg1;	// IMP=0x0000000000003d7b
- (unsigned long long)displayPriorityForCard:(id)arg1;	// IMP=0x0000000000003d13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
