//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError;
@protocol StockUpdaterDelegate;

@interface StockUpdater
{
    NSError *_lastError;	// 40 = 0x28
    _Bool _isComprehensive;	// 48 = 0x30
    _Bool _forceUpdate;	// 49 = 0x31
    id <StockUpdaterDelegate> _delegate;	// 56 = 0x38
    NSArray *_requestStocks;	// 64 = 0x40
    NSArray *_pendingStocks;	// 72 = 0x48
    CDUnknownBlockType _updateCompletionHandler;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000013715
@property(copy, nonatomic) CDUnknownBlockType updateCompletionHandler; // @synthesize updateCompletionHandler=_updateCompletionHandler;
@property(retain, nonatomic) NSArray *pendingStocks; // @synthesize pendingStocks=_pendingStocks;
@property(retain, nonatomic) NSArray *requestStocks; // @synthesize requestStocks=_requestStocks;
@property(readonly, nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(readonly, nonatomic) _Bool isComprehensive; // @synthesize isComprehensive=_isComprehensive;
@property(nonatomic) __weak id <StockUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)failWithError:(id)arg1;	// IMP=0x0000000000013526
- (void)didParseData;	// IMP=0x00000000000133a1
- (_Bool)hadError;	// IMP=0x000000000001338c
- (void)_parseExchangeDictionaries:(id)arg1;	// IMP=0x0000000000012d84
- (void)_parseQuoteDictionaries:(id)arg1 withDataSourceDictionaries:(id)arg2;	// IMP=0x00000000000129f6
- (void)parseData:(id)arg1;	// IMP=0x00000000000128b3
- (_Bool)_updateStocks:(id)arg1 comprehensive:(_Bool)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x0000000000012042

@end
