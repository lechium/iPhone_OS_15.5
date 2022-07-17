//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class NSArray, NSString, WFColor, WFEnumerationParameter, WFIcon, WFImage, WFVariableSubstitutableParameterState;

@protocol WFDynamicEnumerationDataSource <NSObject>
- (NSString *)enumeration:(WFEnumerationParameter *)arg1 localizedLabelForPossibleState:(WFVariableSubstitutableParameterState *)arg2;

@optional
- (WFColor *)enumeration:(WFEnumerationParameter *)arg1 accessoryColorForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
- (_Bool)enumerationShouldProvideValuesForParameterSummaryLocalization:(WFEnumerationParameter *)arg1;
- (_Bool)enumerationAllowsMultipleValues:(WFEnumerationParameter *)arg1;
- (void)loadDefaultSerializedRepresentationForEnumeration:(WFEnumerationParameter *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (id)defaultSerializedRepresentationForEnumeration:(WFEnumerationParameter *)arg1;
- (void)loadPossibleStatesForEnumeration:(WFEnumerationParameter *)arg1 searchTerm:(NSString *)arg2 completionHandler:(void (^)(INObjectCollection *, NSError *))arg3;
- (NSArray *)possibleStatesForEnumeration:(WFEnumerationParameter *)arg1;
- (WFIcon *)enumeration:(WFEnumerationParameter *)arg1 accessoryIconForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
- (WFImage *)enumeration:(WFEnumerationParameter *)arg1 accessoryImageForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
- (NSString *)enumeration:(WFEnumerationParameter *)arg1 localizedSubtitleLabelForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
@end
