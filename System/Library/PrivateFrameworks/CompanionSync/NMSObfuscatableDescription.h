//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NMSObfuscatableDescription : NSObject
{
    NSString *_prefixString;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000062af0
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *prefixString; // @synthesize prefixString=_prefixString;
- (id)CPSafeDescription;	// IMP=0x0000000000062aa3
- (id)description;	// IMP=0x0000000000062a8f
- (id)_descriptionObfuscated:(_Bool)arg1;	// IMP=0x0000000000062778
- (void)addObfuscatedDescriptionFormat:(id)arg1 value:(id)arg2;	// IMP=0x00000000000626c4
- (void)addDescriptionFormat:(id)arg1 value:(id)arg2;	// IMP=0x0000000000062613
- (id)init;	// IMP=0x00000000000625bd

@end

