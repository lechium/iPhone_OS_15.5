//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSSMutablePropertySet;

@interface TSSPropertySetChangeDetails : NSObject
{
    TSSMutablePropertySet *mChangedProperties;	// 8 = 0x8
}

- (id)changedProperties;	// IMP=0x00000000000bfdd0
- (void)addChangedProperties:(id)arg1;	// IMP=0x00000000000bfdba
- (void)addChangedProperty:(int)arg1;	// IMP=0x00000000000bfda4
- (void)dealloc;	// IMP=0x00000000000bfd69
- (id)init;	// IMP=0x00000000000bfd55
- (id)initWithChangedProperties:(id)arg1;	// IMP=0x00000000000bfceb

@end

