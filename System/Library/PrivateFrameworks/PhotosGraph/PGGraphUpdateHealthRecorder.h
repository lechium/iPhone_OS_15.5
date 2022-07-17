//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphUpdateHealthRecording-Protocol.h>

@class CPAnalytics, NSString;

@interface PGGraphUpdateHealthRecorder : NSObject <PGGraphUpdateHealthRecording>
{
    CPAnalytics *_analytics;	// 8 = 0x8
    _Bool _changeConsumer;	// 16 = 0x10
    unsigned long long _numberOfDatabaseChangesReceivedInForeground;	// 24 = 0x18
    unsigned long long _numberOfDatabaseChangesReceivedInBackground;	// 32 = 0x20
    unsigned long long _numberOfDatabaseChangesConvertedToGraphChangesInForeground;	// 40 = 0x28
    unsigned long long _numberOfDatabaseChangesConvertedToGraphChangesInBackground;	// 48 = 0x30
    unsigned long long _numberOfTimesGraphUpdatePaused;	// 56 = 0x38
    unsigned long long _maximumTransactionSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001c0789
@property(readonly, nonatomic, getter=isChangeConsumer) _Bool changeConsumer; // @synthesize changeConsumer=_changeConsumer;
@property(readonly, nonatomic) unsigned long long maximumTransactionSize; // @synthesize maximumTransactionSize=_maximumTransactionSize;
@property(readonly, nonatomic) unsigned long long numberOfTimesGraphUpdatePaused; // @synthesize numberOfTimesGraphUpdatePaused=_numberOfTimesGraphUpdatePaused;
@property(readonly, nonatomic) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInBackground; // @synthesize numberOfDatabaseChangesConvertedToGraphChangesInBackground=_numberOfDatabaseChangesConvertedToGraphChangesInBackground;
@property(readonly, nonatomic) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInForeground; // @synthesize numberOfDatabaseChangesConvertedToGraphChangesInForeground=_numberOfDatabaseChangesConvertedToGraphChangesInForeground;
@property(readonly, nonatomic) unsigned long long numberOfDatabaseChangesReceivedInBackground; // @synthesize numberOfDatabaseChangesReceivedInBackground=_numberOfDatabaseChangesReceivedInBackground;
@property(readonly, nonatomic) unsigned long long numberOfDatabaseChangesReceivedInForeground; // @synthesize numberOfDatabaseChangesReceivedInForeground=_numberOfDatabaseChangesReceivedInForeground;
- (void)endRecordingInBackground:(_Bool)arg1;	// IMP=0x00000000001c02c7
- (void)beginRecording;	// IMP=0x00000000001c02b2
- (void)recordNumberOfDaysSinceMajorOSUpgrade:(unsigned long long)arg1;	// IMP=0x00000000001c01e4
- (void)recordTransactionSize:(unsigned long long)arg1;	// IMP=0x00000000001c01da
- (void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1;	// IMP=0x00000000001c01d0
- (void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(_Bool)arg2;	// IMP=0x00000000001c01bc
- (void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(_Bool)arg2;	// IMP=0x00000000001c01a8
- (id)initForChangeConsumer:(_Bool)arg1 analytics:(id)arg2;	// IMP=0x00000000001c0132

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
