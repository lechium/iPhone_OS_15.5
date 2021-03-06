//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFPromise, MFMailMessage, NSString;

@interface MessageSummaryLoader : NSObject
{
    MFMailMessage *_message;	// 8 = 0x8
    NSString *_summary;	// 16 = 0x10
    unsigned long long _numberOfLoadAttempts;	// 24 = 0x18
    EFPromise *_summaryPromise;	// 32 = 0x20
    double _order;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000588f5
@property(nonatomic) double order; // @synthesize order=_order;
@property(retain, nonatomic) EFPromise *summaryPromise; // @synthesize summaryPromise=_summaryPromise;
@property(nonatomic) unsigned long long numberOfLoadAttempts; // @synthesize numberOfLoadAttempts=_numberOfLoadAttempts;
@property(readonly, nonatomic) NSString *summary; // @synthesize summary=_summary;
- (id)_bodyLoader;	// IMP=0x00100000000587ff
- (_Bool)wantsContentsOfType:(int)arg1;	// IMP=0x00100000000587f4
- (long long)priority;	// IMP=0x001000000005879b
- (double)ordering;	// IMP=0x0010000000058789
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x00100000000583f7
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;	// IMP=0x0010000000058211
- (id)message;	// IMP=0x0010000000058203
- (id)requestSummaryImmediatelyFromDownloadedMessage:(id)arg1;	// IMP=0x00100000000581dd
- (void)cancelSummaryRequest;	// IMP=0x0010000000058086
- (id)requestSummary;	// IMP=0x0010000000057e93
@property(readonly, nonatomic) _Bool summaryLoaded;
- (void)cancel;	// IMP=0x0010000000057d8d
- (id)initWithMessage:(id)arg1;	// IMP=0x0010000000057ca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

