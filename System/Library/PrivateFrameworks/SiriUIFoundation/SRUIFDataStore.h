//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SRUIFDataStore : NSObject
{
    NSMutableDictionary *_entries;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003af3
- (id)initWithPropertyListRepresentation:(id)arg1;	// IMP=0x00000000000034d9
- (id)propertyListRepresentation;	// IMP=0x0000000000003340
- (id)imageDataForKey:(id)arg1;	// IMP=0x0000000000003280
- (void)setImageData:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000031e9
- (id)init;	// IMP=0x000000000000318f
- (id)initWithEntries:(id)arg1;	// IMP=0x000000000000311c

@end

