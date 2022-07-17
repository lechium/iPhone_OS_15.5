//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSAddressBookValueSpecifier : NSObject
{
    NSString *_property;	// 8 = 0x8
    NSString *_component;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
    NSString *_category;	// 32 = 0x20
    NSString *_parentProperty;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000005ed5
@property(readonly, nonatomic) NSString *parentProperty; // @synthesize parentProperty=_parentProperty;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *component; // @synthesize component=_component;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)description;	// IMP=0x0000000000005e23
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005d57
- (unsigned long long)hash;	// IMP=0x0000000000005cfd
- (id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3 category:(id)arg4 parentProperty:(id)arg5;	// IMP=0x0000000000005bbb
- (id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3;	// IMP=0x0000000000005b95

@end
