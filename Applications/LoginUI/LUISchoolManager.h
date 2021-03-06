//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LKClassConfiguration, NSArray, NSString;

@interface LUISchoolManager : NSObject
{
    NSArray *_classes;	// 8 = 0x8
    NSArray *_students;	// 16 = 0x10
    NSString *_schoolName;	// 24 = 0x18
    LKClassConfiguration *_classConfiguration;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x002000000001bdce
- (void).cxx_destruct;	// IMP=0x002000000001c2d7
@property(retain, nonatomic) LKClassConfiguration *classConfiguration; // @synthesize classConfiguration=_classConfiguration;
@property(readonly, copy, nonatomic) NSString *schoolName; // @synthesize schoolName=_schoolName;
@property(copy, nonatomic) NSArray *students; // @synthesize students=_students;
@property(readonly, copy, nonatomic) NSArray *classes; // @synthesize classes=_classes;
- (id)classGroupsDictionary;	// IMP=0x001000000001c28a
- (id)studentForUsername:(id)arg1;	// IMP=0x001000000001c274
- (id)studentForUsername:(id)arg1 inClass:(id)arg2;	// IMP=0x001000000001c25e
- (id)studentForStudentIdentifier:(id)arg1;	// IMP=0x001000000001c248
- (id)studentForStudentIdentifier:(id)arg1 inClass:(id)arg2;	// IMP=0x001000000001c232
- (id)classInfoForClassID:(id)arg1;	// IMP=0x001000000001c21c
- (id)payloadCertificatePersistentID;	// IMP=0x001000000001c1b2
- (void)setClassConfigurationForDictionary:(id)arg1;	// IMP=0x001000000001c0e1
- (_Bool)hasStudents;	// IMP=0x001000000001bf87
- (_Bool)hasClasses;	// IMP=0x001000000001bf61
- (id)initWithURL:(id)arg1;	// IMP=0x001000000001becb
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000001be63
- (id)init;	// IMP=0x001000000001be23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

