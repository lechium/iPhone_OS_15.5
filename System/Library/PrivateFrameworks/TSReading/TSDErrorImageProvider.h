//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSDErrorImageProvider
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000190422
+ (id)sharedInstance;	// IMP=0x0000000000190317
+ (id)_singletonAlloc;	// IMP=0x00000000001902e6
- (struct CGPDFDocument *)p_iconPDFDocument;	// IMP=0x00000000001909a7
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;	// IMP=0x00000000001904f9
- (_Bool)isError;	// IMP=0x00000000001904f1
- (_Bool)isValid;	// IMP=0x00000000001904e9
- (struct CGSize)naturalSize;	// IMP=0x00000000001904d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001904ca
- (id)autorelease;	// IMP=0x00000000001904c1
- (oneway void)release;	// IMP=0x00000000001904bb
- (unsigned long long)retainCount;	// IMP=0x00000000001904b0
- (id)retain;	// IMP=0x00000000001904a7

@end

