//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol CSDMomentsReportingSessionDelegate, OS_dispatch_queue;

@interface CSDMomentsReportingSession : NSObject
{
    _Bool _hasCleanedUp;	// 8 = 0x8
    int _availability;	// 12 = 0xc
    id <CSDMomentsReportingSessionDelegate> _delegate;	// 16 = 0x10
    long long _streamToken;	// 24 = 0x18
    unsigned long long _photoRequestSuccessCount;	// 32 = 0x20
    unsigned long long _photoRequestFailureCount;	// 40 = 0x28
    NSMutableDictionary *_requestTimeoutBlockByTransactionID;	// 48 = 0x30
    NSMutableDictionary *_requestStartDateByTransactionID;	// 56 = 0x38
    NSMutableArray *_photoRequestDurations;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
}

+ (unsigned long long)bucketedInteger:(unsigned long long)arg1;	// IMP=0x004000000016e5fb
+ (double)meanFromDoubleNumbers:(id)arg1;	// IMP=0x001000000016e451
+ (id)medianFromNumbers:(id)arg1;	// IMP=0x001000000016e311
- (void).cxx_destruct;	// IMP=0x002000000016e6fa
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableArray *photoRequestDurations; // @synthesize photoRequestDurations=_photoRequestDurations;
@property(readonly, nonatomic) NSMutableDictionary *requestStartDateByTransactionID; // @synthesize requestStartDateByTransactionID=_requestStartDateByTransactionID;
@property(readonly, nonatomic) NSMutableDictionary *requestTimeoutBlockByTransactionID; // @synthesize requestTimeoutBlockByTransactionID=_requestTimeoutBlockByTransactionID;
@property(nonatomic) _Bool hasCleanedUp; // @synthesize hasCleanedUp=_hasCleanedUp;
@property(nonatomic) unsigned long long photoRequestFailureCount; // @synthesize photoRequestFailureCount=_photoRequestFailureCount;
@property(nonatomic) unsigned long long photoRequestSuccessCount; // @synthesize photoRequestSuccessCount=_photoRequestSuccessCount;
@property(nonatomic) int availability; // @synthesize availability=_availability;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(nonatomic) __weak id <CSDMomentsReportingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (double);	// IMP=0x001000000016e2af
- (id)medianRequestDuration;	// IMP=0x001000000016e245
- (unsigned long long)fuzzyPhotoRequestSuccessCount;	// IMP=0x001000000016e200
- (unsigned long long)fuzzyPhotoRequestFailureCount;	// IMP=0x001000000016e1bb
- (void)reportDataCollectionCompleteIfNecessary;	// IMP=0x001000000016dfd5
- (void)didCleanUp;	// IMP=0x001000000016df2c
- (void)didReceiveResultsWithTransactionID:(id)arg1;	// IMP=0x001000000016db7d
- (void)didStartRequestWithTransactionID:(id)arg1;	// IMP=0x001000000016d816
- (void)registeredStreamWithAvailability:(int)arg1;	// IMP=0x001000000016d78a
- (id)init;	// IMP=0x001000000016d700
- (id)initWithStreamToken:(long long)arg1;	// IMP=0x001000000016d617

@end
