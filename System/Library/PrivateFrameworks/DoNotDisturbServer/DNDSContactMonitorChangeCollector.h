//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/CNChangeHistoryEventVisitor-Protocol.h>

@class NSArray, NSMutableArray, NSSet, NSString;

@interface DNDSContactMonitorChangeCollector : NSObject <CNChangeHistoryEventVisitor>
{
    NSMutableArray *_updatedContacts;	// 8 = 0x8
    NSMutableArray *_deletedContactIdentifiers;	// 16 = 0x10
    NSSet *_monitoredContactIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015f82
@property(readonly, copy, nonatomic) NSArray *deletedContactIdentifiers; // @synthesize deletedContactIdentifiers=_deletedContactIdentifiers;
@property(readonly, copy, nonatomic) NSArray *updatedContacts; // @synthesize updatedContacts=_updatedContacts;
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x0000000000015ec1
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x0000000000015ebb
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x0000000000015eb5
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x0000000000015dd7
- (id)initWithMonitoredContactIdentifiers:(id)arg1;	// IMP=0x0000000000015d09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
