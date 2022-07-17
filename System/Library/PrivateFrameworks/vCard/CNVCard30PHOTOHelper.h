//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNVCardWritingOptions;
@protocol CNVCardPerson;

@interface CNVCard30PHOTOHelper : NSObject
{
    id <CNVCardPerson> _person;	// 8 = 0x8
    CNVCardWritingOptions *_options;	// 16 = 0x10
    unsigned long long _maxBytes;	// 24 = 0x18
}

+ (id)log;	// IMP=0x00000000000203ea
- (void).cxx_destruct;	// IMP=0x0000000000021650
@property(readonly, nonatomic) unsigned long long maxBytes; // @synthesize maxBytes=_maxBytes;
@property(readonly, nonatomic) CNVCardWritingOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) id <CNVCardPerson> person; // @synthesize person=_person;
- (void)logBestEfforImageIfNonNil:(id)arg1;	// IMP=0x00000000000214fb
- (id)compressImage:(id)arg1 allowableCompressions:(id)arg2;	// IMP=0x000000000002119a
- (id)scaleImage:(id)arg1 toFit:(struct CGSize)arg2 allowableCompressionQuality:(id)arg3;	// IMP=0x0000000000020ff9
- (id)scaleImage:(id)arg1 toFitSizes:(id)arg2 allowableCompressionQuality:(id)arg3;	// IMP=0x0000000000020ce1
- (id)image;	// IMP=0x0000000000020c0e
- (id)largeImage;	// IMP=0x0000000000020b3b
- (id)bestEffortImage;	// IMP=0x0000000000020677
- (id)description;	// IMP=0x0000000000020537
- (id)initWithPerson:(id)arg1 options:(id)arg2 maximumDataLength:(unsigned long long)arg3;	// IMP=0x0000000000020483
- (id)init;	// IMP=0x0000000000020446

@end
