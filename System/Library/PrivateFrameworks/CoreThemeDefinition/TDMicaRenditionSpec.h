//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TDMicaRenditionSpec
{
}

- (void)setAttributesFromCopyData:(id)arg1;	// IMP=0x000000000005ff44
- (id)copyDataFromAttributes;	// IMP=0x000000000005feef
- (void)copyAttributesInto:(id)arg1;	// IMP=0x000000000005fee9
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;	// IMP=0x000000000005f75d
- (void)_logExtra:(id)arg1;	// IMP=0x000000000005f757
- (void)_logWarning:(id)arg1;	// IMP=0x000000000005f740
- (void)_logError:(id)arg1;	// IMP=0x000000000005f729
- (id)debugDescription;	// IMP=0x000000000005f6a5

// Remaining properties
@property(nonatomic) _Bool isTintable; // @dynamic isTintable;
@property(copy, nonatomic) NSString *layerPath; // @dynamic layerPath;

@end

