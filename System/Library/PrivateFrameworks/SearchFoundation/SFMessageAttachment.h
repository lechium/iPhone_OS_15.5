//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMessageAttachment-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SFPhotosLibraryImage;

@interface SFMessageAttachment : NSObject <SFMessageAttachment, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;	// 8 = 0x8
    int _type;	// 12 = 0xc
    NSURL *_url;	// 16 = 0x10
    NSData *_linkMetadata;	// 24 = 0x18
    SFPhotosLibraryImage *_photosLibraryImage;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a32c0
- (void).cxx_destruct;	// IMP=0x00000000001a35dd
@property(retain, nonatomic) SFPhotosLibraryImage *photosLibraryImage; // @synthesize photosLibraryImage=_photosLibraryImage;
@property(copy, nonatomic) NSData *linkMetadata; // @synthesize linkMetadata=_linkMetadata;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a34e1
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a3392
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a32e0
- (_Bool)hasType;	// IMP=0x00000000001a32d5
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000019baa9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

