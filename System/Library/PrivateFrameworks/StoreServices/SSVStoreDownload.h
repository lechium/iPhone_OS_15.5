//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SSVStoreDownload : NSObject
{
    NSDictionary *_properties;	// 8 = 0x8
    NSString *_preferredAssetFlavor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017972a
@property(copy, nonatomic) NSString *preferredAssetFlavor; // @synthesize preferredAssetFlavor=_preferredAssetFlavor;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000179694

@end

