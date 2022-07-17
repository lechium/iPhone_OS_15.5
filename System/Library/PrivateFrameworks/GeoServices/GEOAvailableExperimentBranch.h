//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface GEOAvailableExperimentBranch : NSObject
{
    NSString *_label;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_experimentIdentifier;	// 24 = 0x18
    NSMutableArray *_assignments;	// 32 = 0x20
    NSArray *_clientConfig;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000d84871
@property(retain, nonatomic, getter=_clientConfig, setter=_setClientConfig:) NSArray *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic, getter=_dictionaryRepresentation) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSDictionary *clientConfigValues;
- (id)querySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;	// IMP=0x0000000000d83e96
- (void)_addAssignment:(id)arg1;	// IMP=0x0000000000d83e3c
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000d83694
- (id)description;	// IMP=0x0000000000d83680
- (id)initWithLabel:(id)arg1 name:(id)arg2 experimentIdentifier:(id)arg3;	// IMP=0x0000000000d8358b

@end
