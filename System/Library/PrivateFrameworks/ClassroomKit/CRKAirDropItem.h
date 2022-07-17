//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface CRKAirDropItem : NSObject
{
    NSURL *_fileURL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ab421
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)copyToFolder:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ab176
- (id)moveToFolder:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aaed1
- (_Bool)isValidWithError:(id *)arg1;	// IMP=0x00000000000aad82
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSString *UTI;
@property(readonly, copy, nonatomic) NSString *fileName;
- (id)initWithFileURL:(id)arg1;	// IMP=0x00000000000aaa9f

@end
