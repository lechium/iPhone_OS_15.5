//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>
#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHStrokeClassificationResult, CHStrokeClutterFilter, CHStrokeGroupingResult, NSArray, NSData, NSDictionary, NSString;
@protocol CHStrokeProviderVersion;

@interface CHRecognitionSessionResult : NSObject <NSCopying, NSSecureCoding>
{
    long long __transcriptionCapability;	// 8 = 0x8
    NSData *_encodedStrokeProviderVersion;	// 16 = 0x10
    _Bool __shouldUseCachedHasCompleteRecognitionResults;	// 24 = 0x18
    _Bool __hasCompleteRecognitionResults;	// 25 = 0x19
    id <CHStrokeProviderVersion> _strokeProviderVersion;	// 32 = 0x20
    NSArray *_orderedStrokeIdentifiers;	// 40 = 0x28
    long long _sessionMode;	// 48 = 0x30
    NSArray *_locales;	// 56 = 0x38
    NSArray *_preferredLocales;	// 64 = 0x40
    CHStrokeClutterFilter *_clutterFilter;	// 72 = 0x48
    long long _recognitionEnvironment;	// 80 = 0x50
    CHStrokeClassificationResult *_strokeClassificationResult;	// 88 = 0x58
    CHStrokeGroupingResult *_strokeGroupingResult;	// 96 = 0x60
    NSDictionary *__recognitionResultsByGroupID;	// 104 = 0x68
    NSDictionary *__textCorrectionResultsByGroupID;	// 112 = 0x70
    CDStruct_76929b14 _generationDuration;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000087590
- (void).cxx_destruct;	// IMP=0x00000000000883d0
@property(readonly, copy, nonatomic) NSDictionary *_textCorrectionResultsByGroupID; // @synthesize _textCorrectionResultsByGroupID=__textCorrectionResultsByGroupID;
@property(readonly, copy, nonatomic) NSDictionary *_recognitionResultsByGroupID; // @synthesize _recognitionResultsByGroupID=__recognitionResultsByGroupID;
@property(readonly, nonatomic) CDStruct_76929b14 generationDuration; // @synthesize generationDuration=_generationDuration;
@property(readonly, nonatomic) CHStrokeGroupingResult *strokeGroupingResult; // @synthesize strokeGroupingResult=_strokeGroupingResult;
@property(readonly, nonatomic) CHStrokeClassificationResult *strokeClassificationResult; // @synthesize strokeClassificationResult=_strokeClassificationResult;
@property(readonly, nonatomic) long long recognitionEnvironment; // @synthesize recognitionEnvironment=_recognitionEnvironment;
@property(readonly, nonatomic) CHStrokeClutterFilter *clutterFilter; // @synthesize clutterFilter=_clutterFilter;
@property(readonly, copy, nonatomic) NSArray *preferredLocales; // @synthesize preferredLocales=_preferredLocales;
@property(readonly, copy, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(readonly, nonatomic) long long sessionMode; // @synthesize sessionMode=_sessionMode;
@property(readonly, nonatomic) NSArray *orderedStrokeIdentifiers; // @synthesize orderedStrokeIdentifiers=_orderedStrokeIdentifiers;
@property(readonly, nonatomic) id <CHStrokeProviderVersion> strokeProviderVersion; // @synthesize strokeProviderVersion=_strokeProviderVersion;
- (_Bool)hasCompleteRecognitionResults;	// IMP=0x0000000000087d70
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000087cf0
- (_Bool)isEqualToRecognitionSessionResult:(id)arg1;	// IMP=0x0000000000087bf0
- (_Bool)isEqualToSerializableRecognitionSessionResult:(id)arg1;	// IMP=0x00000000000875a0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000086d30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000086a40
- (id)encodedStrokeProviderVersion;	// IMP=0x0000000000086a30
- (id)contextualResultsWithFullyCoveredStrokeGroups:(id)arg1 partiallyCoveredStrokeGroups:(id)arg2 drawingCanvasSize:(struct CGSize)arg3;	// IMP=0x0000000000085d80
- (id)fullyCoveredStrokeGroupsForContextStrokes:(id)arg1 partiallyCoveredStrokeGroups:(id *)arg2;	// IMP=0x00000000000857e0
- (id)textCorrectionResultForStrokeGroupIdentifier:(long long)arg1;	// IMP=0x0000000000085730
- (id)recognitionResultForStrokeGroupIdentifier:(long long)arg1;	// IMP=0x0000000000085680
- (id)_resultsDebugDescriptionIntoGroupsArray:(id)arg1 groupHeaderBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000084910
- (id)allResultsDebugDescriptionWithGroupHeaderBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000848e0
@property(readonly, nonatomic) NSArray *allResultsDebugDescriptionByGroup;
@property(readonly, nonatomic) NSString *allResultsDebugDescription;
@property(readonly, nonatomic) NSString *highConfidenceDebugDescription;
@property(readonly, nonatomic) long long _transcriptionCapability;
- (id)debugDescription;	// IMP=0x0000000000083b60
- (id)description;	// IMP=0x0000000000083770
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000083760
- (id)initWithResult:(id)arg1 validStrokes:(id)arg2;	// IMP=0x0000000000083750
- (id)initWithStrokeProviderVersion:(id)arg1 encodedStrokeProviderVersion:(id)arg2 orderedStrokeIdentifiers:(id)arg3 sessionMode:(long long)arg4 locales:(id)arg5 preferredLocales:(id)arg6 clutterFilter:(id)arg7 strokeClassificationResult:(id)arg8 strokeGroupingResult:(id)arg9 recognitionResults:(id)arg10 inlineContinuousModeResults:(id)arg11 generationDuration:(CDStruct_76929b14)arg12 recognitionEnvironment:(long long)arg13;	// IMP=0x0000000000083310
- (id)init;	// IMP=0x0000000000083260

@end
