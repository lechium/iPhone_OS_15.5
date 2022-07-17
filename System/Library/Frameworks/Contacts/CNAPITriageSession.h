//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest;
@protocol CNAPITriageLogger, CNTimeProvider;

__attribute__((visibility("hidden")))
@interface CNAPITriageSession : NSObject
{
    id <CNAPITriageLogger> _logger;	// 8 = 0x8
    id <CNTimeProvider> _timeProvider;	// 16 = 0x10
    double _timeSessionBegan;	// 24 = 0x18
    double _timeSessionEnded;	// 32 = 0x20
    double _clientCalloutTime;	// 40 = 0x28
    _Bool _hasClientCalloutTime;	// 48 = 0x30
    CNContactFetchRequest *_request;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000011095a
@property(readonly) id <CNTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly) id <CNAPITriageLogger> logger; // @synthesize logger=_logger;
@property(readonly) CNContactFetchRequest *request; // @synthesize request=_request;
- (void)closeWithContacts:(id)arg1 orError:(id)arg2;	// IMP=0x00000000001108f6
- (void)closeWithResult:(id)arg1;	// IMP=0x000000000011084b
- (void)closeWithError:(id)arg1;	// IMP=0x0000000000110812
- (id)normalizeCollectionOfContacts:(id)arg1;	// IMP=0x000000000011066a
- (void)closeWithContacts:(id)arg1;	// IMP=0x000000000011051e
- (void)close;	// IMP=0x00000000001104a9
- (void)addClientCalloutTime:(double)arg1;	// IMP=0x0000000000110495
- (void)open;	// IMP=0x0000000000110459
- (id)initWithRequest:(id)arg1 triageLogger:(id)arg2 timeProvider:(id)arg3;	// IMP=0x000000000011038c
- (id)initWithRequest:(id)arg1;	// IMP=0x00000000001102c6
- (id)init;	// IMP=0x0000000000110289

@end
