//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTablePrinting-Protocol.h>

@class CRKTable, NSArray;

@interface CRKHeaderTable : NSObject <CRKTablePrinting>
{
    CRKTable *_table;	// 8 = 0x8
    NSArray *_headers;	// 16 = 0x10
    NSArray *_keyPaths;	// 24 = 0x18
    NSArray *_objects;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000022484
@property(readonly, copy, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(readonly, copy, nonatomic) NSArray *keyPaths; // @synthesize keyPaths=_keyPaths;
@property(readonly, copy, nonatomic) NSArray *headers; // @synthesize headers=_headers;
- (id)tableString;	// IMP=0x0000000000022416
@property(readonly, nonatomic) CRKTable *table; // @synthesize table=_table;
- (id)crk_JSONRepresentationWithPrettyPrinting:(_Bool)arg1 sortKeys:(_Bool)arg2;	// IMP=0x0000000000021fd1
- (id)initWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3;	// IMP=0x0000000000021eeb

@end

