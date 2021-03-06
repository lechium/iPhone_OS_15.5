//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDPhotoLibraryImportingPersonsImportedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    long long _totalNumberOfImportedPersons;	// 8 = 0x8
    long long _numberOfNamedImportedPersons;	// 16 = 0x10
}

@property(readonly) long long numberOfNamedImportedPersons; // @synthesize numberOfNamedImportedPersons=_numberOfNamedImportedPersons;
@property(readonly) long long totalNumberOfImportedPersons; // @synthesize totalNumberOfImportedPersons=_totalNumberOfImportedPersons;
- (id)initWithTotalNumberOfImportedPersons:(long long)arg1 numberOfNamedImportedPersons:(long long)arg2;	// IMP=0x00000000008ce21b
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

