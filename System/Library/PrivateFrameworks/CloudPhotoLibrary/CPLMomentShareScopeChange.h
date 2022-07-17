//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSString;

@interface CPLMomentShareScopeChange
{
    NSString *_title;	// 64 = 0x40
    NSDate *_creationDate;	// 72 = 0x48
    NSDate *_startDate;	// 80 = 0x50
    NSDate *_endDate;	// 88 = 0x58
    NSDate *_expiryDate;	// 96 = 0x60
    long long _promisedAssetCount;	// 104 = 0x68
    long long _promisedPhotosCount;	// 112 = 0x70
    long long _promisedVideosCount;	// 120 = 0x78
    NSData *_thumbnailImageData;	// 128 = 0x80
    NSData *_previewImageData;	// 136 = 0x88
    NSString *_originatingScopeIdentifier;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000004cebe
@property(copy, nonatomic) NSString *originatingScopeIdentifier; // @synthesize originatingScopeIdentifier=_originatingScopeIdentifier;
@property(copy, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(copy, nonatomic) NSData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
@property(nonatomic) long long promisedVideosCount; // @synthesize promisedVideosCount=_promisedVideosCount;
@property(nonatomic) long long promisedPhotosCount; // @synthesize promisedPhotosCount=_promisedPhotosCount;
@property(nonatomic) long long promisedAssetCount; // @synthesize promisedAssetCount=_promisedAssetCount;
@property(copy, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)udpateScopeFromScopeChange:(id)arg1 direction:(unsigned long long)arg2 didHaveChanges:(_Bool *)arg3;	// IMP=0x000000000004cb2a
- (void)setLibraryInfo:(id)arg1;	// IMP=0x000000000004ca65
- (void)setMomentShare:(id)arg1;	// IMP=0x000000000004ca4a
- (id)momentShare;	// IMP=0x000000000004ca14

@end
