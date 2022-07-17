//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSArray, NSDate, NSString;

@interface CLSSurvey <CLSRelationable>
{
    long long _type;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_authorID;	// 24 = 0x18
    NSString *_serverETag;	// 32 = 0x20
    NSDate *_teacherLastModifiedDate;	// 40 = 0x28
    NSDate *_studentFirstSubmissionDate;	// 48 = 0x30
    long long _surveyUpdateStatus;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026d5a
+ (id)relations;	// IMP=0x00000000000256a1
- (void).cxx_destruct;	// IMP=0x0000000000028ee5
- (_Bool)questionArraysEqual:(id)arg1;	// IMP=0x0000000000028ba0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027efb
- (_Bool)validateObject:(id *)arg1;	// IMP=0x0000000000027ded
- (void)mergeWithObject:(id)arg1;	// IMP=0x0000000000027bad
@property(readonly, nonatomic) NSArray *surveySteps;
- (void)removeSurveyStep:(id)arg1;	// IMP=0x0000000000027b66
- (void)addSurveyStep:(id)arg1;	// IMP=0x0000000000027b4d
- (void)setSurveyUpdateStatus:(long long)arg1;	// IMP=0x0000000000027af9
@property(readonly, nonatomic) long long surveyUpdateStatus;
- (void)setServerETag:(id)arg1;	// IMP=0x00000000000279fd
- (id)serverETag;	// IMP=0x00000000000279ac
- (void)setStudentFirstSubmissionDate:(id)arg1;	// IMP=0x00000000000278f4
- (id)studentFirstSubmissionDate;	// IMP=0x00000000000278a3
- (void)setTeacherLastModifiedDate:(id)arg1;	// IMP=0x00000000000277eb
- (id)teacherLastModifiedDate;	// IMP=0x000000000002779a
- (void)setAuthorID:(id)arg1;	// IMP=0x00000000000276e2
@property(readonly, copy, nonatomic) NSString *authorID;
@property(nonatomic) long long type;
@property(copy, nonatomic) NSString *title;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000273bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026f3a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026d62
- (id)initWithType:(long long)arg1 authorID:(id)arg2;	// IMP=0x0000000000026cac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
