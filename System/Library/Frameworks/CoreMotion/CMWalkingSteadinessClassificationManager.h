//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMWalkingSteadinessClassificationManager : NSObject
{
}

+ (int)mapClassificationTypeFromFrameworkToClassifier:(long long)arg1;	// IMP=0x00000000000bd80d
+ (id)classificationDataFromStruct:(struct CLWalkingSteadinessClassificationData)arg1;	// IMP=0x00000000000bd79f
+ (double)maximumScoreForClassification:(long long)arg1;	// IMP=0x00000000000bd733
+ (double)minimumScoreForClassification:(long long)arg1;	// IMP=0x00000000000bd6c7
+ (_Bool)classificationForScore:(double)arg1 classification:(long long *)arg2;	// IMP=0x00000000000bd603
+ (_Bool)isWalkingSteadinessAvailable;	// IMP=0x00000000000bd5fb

@end

