//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol CRKClassKitChangeNotifierDelegate, CRKClassKitRosterRequirements;

@interface CRKClassKitChangeNotifier : NSObject
{
    id <CRKClassKitChangeNotifierDelegate> _delegate;	// 8 = 0x8
    NSObject<CRKClassKitRosterRequirements> *_requirements;	// 16 = 0x10
    id _generalObserverToken;	// 24 = 0x18
    id _trustedPersonObserverToken;	// 32 = 0x20
    NSSet *_observedTrustedPersonIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007e547
@property(copy, nonatomic) NSSet *observedTrustedPersonIDs; // @synthesize observedTrustedPersonIDs=_observedTrustedPersonIDs;
@property(retain, nonatomic) id trustedPersonObserverToken; // @synthesize trustedPersonObserverToken=_trustedPersonObserverToken;
@property(retain, nonatomic) id generalObserverToken; // @synthesize generalObserverToken=_generalObserverToken;
@property(readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // @synthesize requirements=_requirements;
@property(nonatomic) __weak id <CRKClassKitChangeNotifierDelegate> delegate; // @synthesize delegate=_delegate;
- (id)trustedPersonIDsInRoster:(id)arg1;	// IMP=0x000000000007e1c8
- (void)dataChanged;	// IMP=0x000000000007e10f
- (CDUnknownBlockType)makeObserverBlock;	// IMP=0x000000000007dfe3
- (void)stopObservingTrustedPersons;	// IMP=0x000000000007df25
- (void)stopObservingGeneralChanges;	// IMP=0x000000000007de67
- (void)startObservingGeneralChanges;	// IMP=0x000000000007ddce
- (_Bool)updateObservedTrustedPersonIDsWithRoster:(id)arg1;	// IMP=0x000000000007dc7c
- (id)initWithRequirements:(id)arg1;	// IMP=0x000000000007dbe7
- (void)dealloc;	// IMP=0x000000000007db94

@end

