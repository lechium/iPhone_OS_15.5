//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SymbolValidator
{
    NSArray *_symbols;	// 40 = 0x28
    id _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000017a82
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)failWithError:(id)arg1;	// IMP=0x00000000000179c8
- (void)didParseData;	// IMP=0x0000000000017981
- (void)parseData:(id)arg1;	// IMP=0x000000000001739e
- (void)validateSymbol:(id)arg1 withMaxResults:(int)arg2;	// IMP=0x000000000001701e
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000016fb7

@end
