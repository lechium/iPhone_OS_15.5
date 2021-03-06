//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSItemProvider, NSString;

@interface PHPickerResult : NSObject
{
    NSItemProvider *_itemProvider;	// 8 = 0x8
    NSString *_assetIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013eadc
@property(readonly, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property(readonly, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (id)_initWithItemProvider:(id)arg1 assetIdentifier:(id)arg2;	// IMP=0x000000000013e92a
- (unsigned long long)hash;	// IMP=0x000000000013e88c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013e5ba
- (id)init;	// IMP=0x000000000013e540

@end

