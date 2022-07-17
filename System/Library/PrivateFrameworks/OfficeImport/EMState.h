//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDSheet, EDWorkbook, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EMState
{
    EDWorkbook *_workbook;	// 88 = 0x58
    EDSheet *_currentSheet;	// 96 = 0x60
    NSMutableDictionary *_hyperlinks;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000047a6a6
@property __weak EDSheet *currentSheet; // @synthesize currentSheet=_currentSheet;
- (void)setHyperlink:(id)arg1 forRow:(unsigned long long)arg2 column:(unsigned long long)arg3;	// IMP=0x000000000047a5c7
- (id)hyperlinkForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;	// IMP=0x000000000047a53e

// Remaining properties
@property(retain) EDWorkbook *document; // @dynamic document;

@end
