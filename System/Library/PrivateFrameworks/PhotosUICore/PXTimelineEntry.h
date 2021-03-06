//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDate, NSString, NSURL, PXTimelineCrop;

@interface PXTimelineEntry : NSObject <NSCopying>
{
    unsigned long long _contentType;	// 8 = 0x8
    NSDate *_startTime;	// 16 = 0x10
    NSDate *_endTime;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    NSString *_localIdentifier;	// 48 = 0x30
    NSString *_assetLocalIdentifier;	// 56 = 0x38
    NSURL *_deeplink;	// 64 = 0x40
    PXTimelineCrop *_suggestedCrop;	// 72 = 0x48
    NSString *_proactiveCriterion;	// 80 = 0x50
    double _relevanceScore;	// 88 = 0x58
    unsigned long long _rejectReason;	// 96 = 0x60
}

+ (id)descriptionForRejectReason:(unsigned long long)arg1;	// IMP=0x0000000000252938
+ (id)descriptionForTimelineContentType:(unsigned long long)arg1;	// IMP=0x000000000025291c
+ (id)fallbackEntryForSize:(unsigned long long)arg1;	// IMP=0x0000000000252836
+ (id)placeholderEntry;	// IMP=0x000000000025279d
+ (id)emptyWidgetURL;	// IMP=0x000000000025277d
- (void).cxx_destruct;	// IMP=0x0000000000252632
@property(nonatomic) unsigned long long rejectReason; // @synthesize rejectReason=_rejectReason;
@property(readonly, nonatomic) double relevanceScore; // @synthesize relevanceScore=_relevanceScore;
@property(retain, nonatomic) NSString *proactiveCriterion; // @synthesize proactiveCriterion=_proactiveCriterion;
@property(retain, nonatomic) PXTimelineCrop *suggestedCrop; // @synthesize suggestedCrop=_suggestedCrop;
@property(readonly, nonatomic) NSURL *deeplink; // @synthesize deeplink=_deeplink;
@property(readonly, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property(readonly, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000252555
- (unsigned long long)hash;	// IMP=0x0000000000252511
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000252442
- (id)dictionaryRepresentation;	// IMP=0x0000000000251f05
- (id)description;	// IMP=0x0000000000251aa1
- (id)_utcTimeFormatter;	// IMP=0x0000000000251a71
- (id)_localTimeFormatter;	// IMP=0x0000000000251a41
- (id)_initWithTimelineEntry:(id)arg1;	// IMP=0x0000000000251853
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 localIdentifier:(id)arg3 assetLocalIdentifier:(id)arg4 deeplink:(id)arg5 contentType:(unsigned long long)arg6 relevanceScore:(double)arg7 proactiveCriterion:(id)arg8 suggestedCrop:(id)arg9 rejectReason:(unsigned long long)arg10;	// IMP=0x00000000002516ba
- (id)initWithFeaturedPhoto:(id)arg1 andFeaturedPhotoKeyAsset:(id)arg2 suggestedCrop:(id)arg3;	// IMP=0x0000000000251521
- (id)initWithFeaturedPhoto:(id)arg1 andFeaturedPhotoKeyAsset:(id)arg2;	// IMP=0x000000000025150c
- (id)initWithMemory:(id)arg1 andMemoryKeyAsset:(id)arg2;	// IMP=0x00000000002512f0

@end

