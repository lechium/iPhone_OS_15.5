//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardSerializationStorage-Protocol.h>

@class NSMutableData, NSString;

@interface CNVCardDataStorage : NSObject <CNVCardSerializationStorage>
{
    NSMutableData *_data;	// 8 = 0x8
}

+ (id)storageWithData:(id)arg1;	// IMP=0x000000000001f7cb
- (void).cxx_destruct;	// IMP=0x000000000001fba4
- (void)insertString:(id)arg1 atMarker:(id)arg2;	// IMP=0x000000000001faaf
- (unsigned long long)estimatedDataLength;	// IMP=0x000000000001fa99
- (id)insertionMarker;	// IMP=0x000000000001fa60
- (unsigned long long)currentLength;	// IMP=0x000000000001fa4a
- (void)appendData:(id)arg1;	// IMP=0x000000000001fa34
- (void)appendFormat:(id)arg1;	// IMP=0x000000000001f923
- (void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;	// IMP=0x000000000001f8d0
- (void)appendString:(id)arg1;	// IMP=0x000000000001f881
- (id)initWithData:(id)arg1;	// IMP=0x000000000001f814

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

