//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUEncodedBlockInfo-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUEncodedBlockInfoInternal : NSObject <TSUEncodedBlockInfo>
{
    unsigned long long _encodedLength;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d23b7
@property(readonly, nonatomic) unsigned long long decodedLength;
- (id)initWithEncodedLength:(unsigned long long)arg1;	// IMP=0x00000000002d2370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

