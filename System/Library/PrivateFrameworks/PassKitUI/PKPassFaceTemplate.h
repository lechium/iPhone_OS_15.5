//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PKPassFieldTemplate;

@interface PKPassFaceTemplate : NSObject
{
    double _barcodeBottomInset;	// 8 = 0x8
    PKPassFieldTemplate *_defaultFieldTemplate;	// 16 = 0x10
    NSMutableArray *_bucketTemplates;	// 24 = 0x18
    struct CGSize _barcodeMaxSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005a233
@property(retain, nonatomic) NSMutableArray *bucketTemplates; // @synthesize bucketTemplates=_bucketTemplates;
@property(retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate; // @synthesize defaultFieldTemplate=_defaultFieldTemplate;
@property(nonatomic) struct CGSize barcodeMaxSize; // @synthesize barcodeMaxSize=_barcodeMaxSize;
@property(nonatomic) double barcodeBottomInset; // @synthesize barcodeBottomInset=_barcodeBottomInset;
- (id)templateForBucketAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005a104
- (void)addBucketTemplate:(id)arg1;	// IMP=0x000000000005a0aa

@end
