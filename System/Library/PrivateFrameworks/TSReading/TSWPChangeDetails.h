//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSDAnnotationHosting-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSWPChange;
@protocol TSKModel;

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting>
{
    NSString *mChangeString;	// 8 = 0x8
    id <TSKModel> model;	// 16 = 0x10
    TSWPChange *_change;	// 24 = 0x18
}

@property(retain, nonatomic) TSWPChange *change; // @synthesize change=_change;
@property(nonatomic) id <TSKModel> model; // @synthesize model;
- (void)commitText:(id)arg1;	// IMP=0x00000000002721cc
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSString *changeTrackingString;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027203f
- (_Bool)isEqualToChangeDetails:(id)arg1;	// IMP=0x0000000000271f2b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000271ede
- (void)dealloc;	// IMP=0x0000000000271e94
- (id)initWithChange:(id)arg1 changeString:(id)arg2;	// IMP=0x0000000000271e2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) TSDCommentStorage *storage;
@property(readonly) Class superclass;

@end

