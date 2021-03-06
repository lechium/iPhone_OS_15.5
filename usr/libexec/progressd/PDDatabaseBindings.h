//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PDDatabaseBindings : NSObject
{
    NSMutableArray *_columnsArray;	// 8 = 0x8
    NSMutableArray *_bindingsArray;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000957c0
@property(readonly, nonatomic) NSMutableArray *bindingsArray; // @synthesize bindingsArray=_bindingsArray;
@property(readonly, nonatomic) NSMutableArray *columnsArray; // @synthesize columnsArray=_columnsArray;
- (void)removeValuesForColumns:(id)arg1;	// IMP=0x00100000000955fd
- (void)setValue:(id)arg1 forColumnNamed:(id)arg2;	// IMP=0x001000000009555d
- (id)initWithColumnsArray:(id)arg1 bindingsArray:(id)arg2;	// IMP=0x00100000000954c4
- (id)init;	// IMP=0x0010000000095407

@end

