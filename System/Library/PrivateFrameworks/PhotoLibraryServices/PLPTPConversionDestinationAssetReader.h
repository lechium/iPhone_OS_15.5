//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHMediaFormatConversionDestination;

@interface PLPTPConversionDestinationAssetReader
{
    PHMediaFormatConversionDestination *_destination;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000030083a
@property(retain) PHMediaFormatConversionDestination *destination; // @synthesize destination=_destination;
- (id)path;	// IMP=0x00000000003006dd
- (id)dataSourcePathForDataRange:(struct _NSRange)arg1 error:(id *)arg2;	// IMP=0x0000000000300372
- (id)initWithDestination:(id)arg1;	// IMP=0x000000000030023a

@end
