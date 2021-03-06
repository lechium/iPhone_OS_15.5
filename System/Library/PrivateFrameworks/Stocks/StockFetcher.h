//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/SymbolValidatorDelegate-Protocol.h>

@class NSString, NSTimer, SymbolValidator;

@interface StockFetcher : NSObject <SymbolValidatorDelegate>
{
    double _timeoutDuration;	// 8 = 0x8
    SymbolValidator *_validator;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    NSTimer *_timeoutTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004c638
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) SymbolValidator *validator; // @synthesize validator=_validator;
@property double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
- (void)symbolValidator:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000004c5b7
- (void)symbolValidator:(id)arg1 didValidateSymbols:(id)arg2;	// IMP=0x000000000004c53e
- (void)cleanUpAndReportResult:(id)arg1;	// IMP=0x000000000004c459
- (void)remoteFetchTimedOut;	// IMP=0x000000000004c445
- (void)attemptRemoteFetchOfStockWithSymbol:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c3c0
- (void)fetchStockWithSymbol:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c2a8
- (id)initWithValidator:(id)arg1;	// IMP=0x000000000004c208
- (id)init;	// IMP=0x000000000004c1c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

