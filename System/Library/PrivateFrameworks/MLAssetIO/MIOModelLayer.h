//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MIOModelLayer : NSObject
{
    NSDictionary *_layerHistogram;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000304ab
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;	// IMP=0x00000000000303e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003022e
- (id)description;	// IMP=0x00000000000301a9
- (id)layerHistogram;	// IMP=0x000000000003019b
- (id)initWithMessageStream:(struct CodedInputStream *)arg1 error:(id *)arg2;	// IMP=0x000000000002ff26
- (id)initWithName:(id)arg1 type:(id)arg2 histogram:(id)arg3;	// IMP=0x000000000002fe1f
- (id)initWithName:(id)arg1 type:(id)arg2;	// IMP=0x000000000002fd50

@end

