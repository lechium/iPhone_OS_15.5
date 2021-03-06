//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFObjectPropertyMapper-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface EFSearchableIndexObjectPropertyMapper : NSObject <EFObjectPropertyMapper>
{
    NSDictionary *_children;	// 8 = 0x8
    NSArray *_attributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000033030
@property(readonly, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSDictionary *children; // @synthesize children=_children;
- (id)childForKey:(id)arg1;	// IMP=0x0000000000032eff
- (id)initWithAttributes:(id)arg1;	// IMP=0x0000000000032ee7
- (id)initWithChildren:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000032e30
- (id)initWithChildren:(id)arg1;	// IMP=0x0000000000032e16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

