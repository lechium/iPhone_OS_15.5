//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNAPITriageLogger-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockAPITriageLogger : NSObject <CNAPITriageLogger>
{
}

- (void)request:(id)arg1 willReturnAnchor:(id)arg2;	// IMP=0x00000000001198c4
- (void)request:(id)arg1 spentTimeInClientCode:(double)arg2;	// IMP=0x00000000001198be
- (void)didReturnAllResultsForContactFetchRequest:(id)arg1;	// IMP=0x00000000001198b8
- (void)willExecuteFetchRequest:(id)arg1;	// IMP=0x00000000001198b2
- (void)request:(id)arg1 containsContact:(id)arg2;	// IMP=0x00000000001198ac
- (void)request:(id)arg1 encounteredError:(id)arg2;	// IMP=0x00000000001198a6
- (void)didExecuteFetchRequest:(id)arg1 duration:(double)arg2;	// IMP=0x00000000001198a0
- (void)clientStoppedEnumerationForRequest:(id)arg1;	// IMP=0x000000000011989a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

